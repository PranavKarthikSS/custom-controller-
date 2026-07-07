# 🎮 Custom Gaming Controller

<p align="center">
  <img src="images/controller.png" alt="Custom Gaming Controller" width="700"/>
</p>

<p align="center">
  <strong>A custom-built USB gaming controller designed from scratch using Arduino Pro Micro, combining embedded systems, 3D design, and hardware engineering.</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-Pro%20Micro-00979D?style=for-the-badge&logo=arduino&logoColor=white"/>
  <img src="https://img.shields.io/badge/C++-Arduino%20IDE-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
  <img src="https://img.shields.io/badge/3D%20Design-Autodesk%20123D-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/3D%20Printed-PLA-success?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/USB-HID-blue?style=for-the-badge"/>
</p>

---

# 📖 Overview

This project showcases the design and development of a fully functional **USB Gaming Controller** built entirely from scratch.

The controller uses an **Arduino Pro Micro** to emulate a USB Human Interface Device (HID), allowing it to be recognized by a PC as a standard game controller. The enclosure was designed using **Autodesk 123D**, manufactured through **3D printing**, and assembled with tactile switches and analog joysticks to deliver a responsive gaming experience.

This project combines **embedded systems**, **hardware design**, **3D modeling**, and **product prototyping** into a single custom-built device.

---

# ✨ Features

* 🎮 Plug-and-Play USB Gaming Controller
* 🕹️ Dual Analog Joysticks
* 🔘 Responsive Tactile Push Buttons
* ⚡ Low Latency Input
* 💻 USB HID Compatible
* 🖨️ Custom Designed 3D Printed Enclosure
* 🔧 Compact and Lightweight Design
* 🛠️ Easy to Modify and Expand

---

# 🛠️ Hardware Components

| Component         | Purpose               |
| ----------------- | --------------------- |
| Arduino Pro Micro | Main Controller       |
| Analog Joysticks  | Directional Input     |
| Tactile Switches  | Action Buttons        |
| USB Cable         | Power & Data Transfer |
| 3D Printed Case   | Custom Enclosure      |

---

# 💻 Software & Tools

| Software      | Usage                |
| ------------- | -------------------- |
| Arduino IDE   | Firmware Development |
| Autodesk 123D | 3D Modeling          |
|               |                      |

# ⚙️ How It Works

```text
Button / Joystick Input
            │
            ▼
Arduino Pro Micro
            │
USB HID Communication
            │
            ▼
      Computer / Laptop
            │
            ▼
    Recognized as Gamepad
```

The Arduino continuously reads the state of the joysticks and tactile switches, converts them into USB HID signals, and sends them directly to the connected computer. Since the Pro Micro supports native USB HID, no additional drivers are required on most operating systems.

---

# 🚀 Getting Started

## Clone the Repository

```bash
git clone https://github.com/yourusername/Custom-Gaming-Controller.git
```

## Open the Project

Open the `.ino` file using the **Arduino IDE**.

## Upload Firmware

1. Connect the Arduino Pro Micro.
2. install the SparkFun Pro Micro w/ XInput library 
3. Select the correct board and COM port.
4. Upload the code.

Once uploaded, the controller will be detected as a USB gamepad.

---

# 🎯 Applications

* PC Gaming
* DIY Electronics
* Embedded Systems Learning
* Arduino HID Projects
* Product Prototyping
* Maker Projects

---

# 🔮 Future Improvements

* 🎮 Wireless Bluetooth Connectivity
* 🔋 Rechargeable Battery Support
* 🌈 RGB Lighting Effects
* 📳 Haptic Vibration Feedback
* 🎚️ Adjustable Trigger Sensitivity
* ⚙️ Companion Configuration Software
* 🎧 Headphone Jack Support

---

# 📈 Skills Demonstrated

* Embedded Systems
* Arduino Programming
* USB HID Communication
* Hardware Prototyping
* Circuit Design
* 3D CAD Modeling
* Product Design
* Rapid Prototyping
* Electronics Assembly
* Problem Solving

---

# 👨‍💻 Author

**Pranav Karthik**

Computer Science Engineering Student

Passionate about Embedded Systems, IoT, AI, Product Design, and Full-Stack Development.

---

# ⭐ Support

If you found this project interesting, consider giving it a ⭐ on GitHub. Your support motivates me to build and share more innovative projects!

---

## 📜 License

This project is licensed under the MIT License.
