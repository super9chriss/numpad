# ⌨️ Custom RP2040 Numpad

![Project Status](https://img.shields.io/badge/Status-Finished-success)
![MCU](https://img.shields.io/badge/MCU-Seeed_XIAO_RP2040-blue)
![Firmware](https://img.shields.io/badge/Firmware-QMK-ff69b4)

A custom-designed, 16-key mechanical numpad powered by the RP2040. Designed with a custom PCB and a 3D-printed enclosure. 

<div align="center">
  <img src="https://github.com/user-attachments/assets/4033f329-93c3-43e9-b174-cde88e44a26b" alt="Numpad Finished" width="600"/>
</div>

## ✨ Features
* **16 Keys:** Standard 4x4 matrix layout.
* **Controller:** Seeed Studio XIAO RP2040.
* **Firmware:** QMK with VIA support.
* **Case:** Custom 3D-printed enclosure (Top & Bottom).

## 🛠️ Bill of Materials (BOM)

| Component | Quantity | Description | Link | Cost |
| :--- | :---: | :--- | :--- | :--- |
| **MCU** | 1 | Seeed XIAO RP2040 |https://www.tinytronics.nl/en/development-boards/microcontroller-boards/others/seeed-studio-seeeduino-xiao-rp2040-dual-core-cortex-m0-separate-headers | €7.00
| **Switches** | 16 | Cherry MX compatible switches | https://www.amazon.nl/mechanische-toetsenbordschakelaars-reserveonderdelen-reserveschakelaar-gamingtoetsenbord/dp/B0FH1J46V5 | €9.79
| **Keycaps** | 16 | DSA Profile (Blank) | https://www.amazon.nl/Paopaoldm-Engraving-Sublimation-Switches-Keyboard/dp/B0D3FR1HT5| €8.34
| **PCB** | 1 | Custom Numpad PCB | https://cart.jlcpcb.com/quote?stencilLayer=2&stencilWidth=100&stencilLength=100&stencilCounts=5&plateType&spm=Jlcpcb.Homepage.1010 | €18.79
| **Inserts** | 4 | M3 Heatset Inserts | https://www.bitsandparts.nl/Draadinzetstuk-M3-x-4-x-4-p1929600?gad_source=1&gad_campaignid=17339301268&gbraid=0AAAAADpItpeM5ppLxZ7FQfrTrApre5PML&gclid=Cj0KCQiA6Y7KBhCkARIsAOxhqtOuZc5zMjiW9-lEVaj6UW_oBEvaZ3dtExOxGxcrMgOVI5ki9B38r9saAgo3EALw_wcB | €0.80
| **Screws** | 4 | M3x16 Bolts | https://www.hornbach.nl/p/dresselhaus-lenskopschroef-kruis-m3x16-mm-phillips-ph2-din-7985-rvs-a2-100-stuks/6836143/ | €0.18
| **Total** |  |  |  | **€44.90** |

## 🔌 Electronics & PCB

The PCB was designed to fit the XIAO RP2040 footprint using a simple col/row matrix.

| **PCB Layout** | **Schematic** |
| :---: | :---: |
| <img src="https://github.com/user-attachments/assets/89ff4e5a-e7ec-4399-a694-27cdd695ae09" width="400"/> | <img src="https://github.com/user-attachments/assets/ad70a4db-67c3-49dc-b46a-77f52431e589" width="400"/> |

