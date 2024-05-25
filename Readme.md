## Here c++ Code & Snippets

# Linux
`sudo dpkg --configure -a` 
- Instruct dpkg to "fix" itself

`sudo apt-get -f install`
- This will instruct apt-get to correct dependencies and continue to configure your packages.

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



