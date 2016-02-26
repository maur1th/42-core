sudo locale-gen en_US.UTF-8
sudo apt-get update
sudo apt-get -y upgrade
sudo apt-get install -y git build-essential python3 python3-pip virtualenvwrapper nginx postgresql postgresql-server-dev-9.3 memcached libmemcached-dev python-imaging nginx supervisor libjpeg-dev libtiff5-dev libfreetype6-dev liblcms2-dev libwebp-dev
su - link
mkvirtualenv -p /usr/bin/python3 link
pip install -r requirements.txt
