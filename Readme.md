## Here c++ Code & Snippets
### cpp file Run In Command line
```
g++ file name
./a.out
```
# Linux
- unzip 

`tar -xvzf  file_name   `

- .dev file install 

`sudo dpkg -i package_name`

- .dev file uninstall 

`sudo dpkg -r package_name`

- .dev file reconfigure 

`sudo dpkg-reconfigure PACKAGE_NAME `

- Instruct dpkg to "fix" itself
`sudo dpkg --configure -a` 

- This will instruct apt-get to correct dependencies and continue to configure your packages.

`sudo apt-get -f install`


### My Laptop Sound Problem
First Add endof the file *alsa-base.conf* *options snd-hda-intel model=,dell-headset-multi*.To do this:
```
Command: sudo gedit /etc/modprobe.d/alsa-base.conf
options snd-hda-intel model=,dell-headset-multi
```
Then Install this software pulseaudio,pavucontrol,if your wish to record sound install gnome-sound-recorder.
```
sudo apt install pulseaudio  
sudo apt install pavucontrol 
sudo apt install gnome-sound-recorder
sudo apt update
sudo apt upgrade
```



