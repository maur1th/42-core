# csv2json.py
#
# Copyright 2009 Brian Gershon -- briang at webcollective.coop
#
# Licensed under the Apache License, Version 2.0 (the 'License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import sys
import csv, codecs, io
import getopt
from os.path import dirname
import json
import re

try:
    script, input_file_name, model_name = sys.argv
except ValueError:
    print('\nRun via:\n\n%s input_file_name model_name' % sys.argv[0])
    print('\ne.g. %s airport.csv app_airport.Airport' % sys.argv[0])
    print('\nNote: input_file_name should be a path relative to where this script is.')
    sys.exit()

in_file = dirname(__file__) + input_file_name
out_file = dirname(__file__) + input_file_name.replace('.csv', '.json')

print('Converting %s from CSV to JSON as %s' % (in_file, out_file))

f = codecs.open(in_file, 'r', encoding='ISO-8859-2' )
fo = open(out_file, 'w')

reader = csv.reader( f, delimiter=';' )

# 42 SG
ISIN = ['FR0000295230', 'FR0010321802', 'LU0104884860', 'LU0320896664',
        'LU0572952280', 'LU0243955530', 'FR0000003964', 'GB00B1VMCY93',
        'LU0251130802', 'FR0010204552', 'LU0107852195', 'FondsEuro123',
        'FR0000120271', 'FR0000121261', 'FR0000133308', 'DE0007664005',
        'FR0010428771', 'US2267181046', 'US0378331005', 'FR0010315770',
        'FR0010028860', 'ChangeEURUSD']

isin_mapping = {}
for i, code in enumerate(ISIN):
    isin_mapping[code] = i + 1
# END

header_row = []
entries = []

# debugging
# if model_name == 'app_airport.Airport':
#     import pdb ; pdb.set_trace( )

def digitize(m):
    return m.group(1) + m.group(2)

for row in reader:
    if not header_row:
        header_row = row
        continue

    pk = re.sub('CL(\d\d)Co(\d)', digitize, row[0])
    model = model_name
    fields = {}
    for i in range(len(row)-1):
        active_field = row[i+1] if row[i+1] != '' else '0'
        # 42 SG
        if active_field in isin_mapping:
            active_field = str(isin_mapping[active_field])
        active_field = re.sub('CL(\d\d)Co(\d)', digitize, active_field)
        # END


        # convert numeric strings into actual numbers by converting to either int or float
        if active_field.isdigit():
            try:
                new_number = int(active_field)
            except ValueError:
                new_number = float(active_field)
            fields[header_row[i+1]] = new_number
        else:
            fields[header_row[i+1]] = active_field.strip()

    row_dict = {}
    row_dict['pk'] = int(pk)
    row_dict['model'] = model_name

    row_dict['fields'] = fields
    entries.append(row_dict)

fo.write('%s' % json.dumps(entries, indent=4))

f.close()
fo.close()
