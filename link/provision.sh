#!/bin/sh
echo Provisioning...
sudo locale-gen en_US.UTF-8
apt-get update
apt-get upgrade -y
apt-get install -y git build-essential python3 python3-pip virtualenvwrapper nginx postgresql postgresql-server-dev-9.3 memcached libmemcached-dev python-imaging nginx supervisor libjpeg-dev libtiff5-dev libfreetype6-dev liblcms2-dev libwebp-dev
echo Setting up database...
sudo -u postgres psql << EOF
CREATE DATABASE linkdb;
CREATE USER link WITH PASSWORD 'link';
ALTER ROLE link SET client_encoding TO 'utf8';
ALTER ROLE link SET default_transaction_isolation TO 'read committed';
ALTER ROLE link SET timezone TO 'UTC';
GRANT ALL PRIVILEGES ON DATABASE linkdb TO link;
EOF

# su - link
# mkvirtualenv -p /usr/bin/python3 link
# pip install -r requirements.txt
# python manage.py migrate
