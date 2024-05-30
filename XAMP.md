## XAMP Installation

- change mode *sudo chmod 755 xampp-linux-x64-8.1.25-0-installer.run *
- sudo ./xamp.run
- http://localhost:81/dashboard/

- To check which port use apache server *sudo lsof -i -P -n | grep apache2*
- status check *sudo systemctl status apache2*
- php install *sudo apt install php libapache2-mod-php php-mbstring php-xmlrpc php-soap php-gd php-xml php-cli php-zip php-bcmath php-tokenizer php-json php-pear*

- composer install *curl -sS https://getcomposer.org/installer | php*
- *sudo mv composer.phar /usr/local/bin/composer*
- *sudo chmod +x /usr/local/bin/composer*
- *composer create-project --prefer-dist laravel/laravel projectName*
- *cd projectName*
- *php artisan serve --host=127.0.0.1 --port=3000*
