<p align="center">
  <a href="" rel="noopener">

</p>

<h3 align="center">Bluetooth Controlled Home Automation System</h3>

---

<p align="center"> This project is a smart home automation system that can be controlled via bluetooth using a mobile phone.
    <br> 
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Linking App with PC](#linking)
- [Conclusion](#conclusion)


## 🧐 About <a name = "about"></a>

This project was inspired by Laziness😂😂, well lazy people finds easy ways to solve problems.. In my case, i built a simple Home Automation System so that i wouldn't have to keep getting up to turn on/off switches.

## 🏁 Getting Started <a name = "getting_started"></a>
You'll need; a PC running windows 7 and above, most prefferably windows 10. An android phone and a little patience 👌

### Prerequisites

What things you need to install the software and how to install them.

```
-- Proteus 8.10 above
-- Arduino IDE
-- Android App
```

### Installing

1. Download and install the Proteus software from <a href = "https://getintopc.com/softwares/3d-cad/proteus-professional-2020-free-download/"></a> 
follow the instructions on the zip file to get it up and running
<br/>
2. Download and install the Arduino IDE from the official site <a href = "https://arduino.cc/en/software"></a>

3. Download the Android App from <a href = "https://play.google.com/store/apps/details?id=com.appsvalley.bluetooth.arduinocontroller"></a>

## 🎈 Setup <a name="setup"></a>

1. Before running simulations of the circuit on the proteus software, you'll need to install the Arduino and bluetooth library for proteus, You can download the library from <a href = "https://www.theengineeringprojects.com/2016/08/new-proteus-libraries-engineering-students.html" ></a> follow the instructions on the site to setup the library on proteus.
After setting up the library, open the proteus file in the "Circuit" folder, then right click on the arduino and load the .hex file into it. 
2. Now to setup the android app; open the app and go to "Buttons" click and hold a button to configure, now write the following for "ON" and "OFF" commands -> (1,2) for the first button, followed by (3,4),(5,6) and (7,8) for subsequent buttons.

## Linking App with PC <a name="linking"></a>
To link App with PC, go to your bluetooth setting, then click on other settings (depends on your OS),then go to COM port and create and incoming COM port and take note of the port number.
then go to the proteus simulation and right click on the HC-05 bluetooth module, then "Edit properties", then click on physical port and input the incoming port you just created.
finally, turn on your pc bluetooth and connect with the android app, you can now control the lamps with your phone through bluetooth..😃😃



## 🎉 Conclusion <a name = "conclusion"></a>

You can easily control your home using this Home Automation System, you can buy the components used in this project and build a real life version if you wish.😃
<a href = "mailto:soloyaks.sy@gmail.com">You can contact me via email for a guide in building a real life version</a>
