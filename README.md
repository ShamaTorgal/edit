# ILSWTTI101-Mar-Team27
## Team Details

|Sl. No	| Name | PS number | Track | Business Unit | Email | Photo|
| --- | --- | --- | --- |---|---|---|
|01| Shama Torgal | 99007649 | Embedded | Embedded Engineering and V & V Group | shama.torgal@ltts.com| <img src =https://user-images.githubusercontent.com/98812378/160238374-1bb45b86-d797-4115-97c2-49313be6fde5.jpeg  width="60" height="60"> |
|02| Pavithra Murugan | 99007720 | Software | Embedded Engineering and V&V Group | pavithra.murugan@ltts.com | <img src =https://user-images.githubusercontent.com/98812378/160238346-e9541b6f-5cd6-47ff-bf20-8ea1dc79ca66.jpeg width="60" height="60"> |
|03| Kurukuti Tharun Sai Teja | 99007826 | Software | Hi-Tech, Communications & Media Common | kurukuti.tharunsaiteja@ltts.com | <img src = https://user-images.githubusercontent.com/98812378/160238288-2d8e35da-09ec-4298-82ad-30891945027f.jpeg width="60" height="60">|
|04|  Mohmad Aymen Naqash | 99007879 |  Software | Industrial & Consumer Products | mohmadaymen.naqash@ltts.com |<img src =https://user-images.githubusercontent.com/98812378/160238197-15be60b9-2211-4791-ba7f-98ce35f8c632.jpeg width="60" height="60"> |
|05| Mukul Didolkar | 99007833 |  Embedded | Industrial & Consumer Products | mukul.didolkar@ltts.com|   <img src = https://user-images.githubusercontent.com/98812378/160238245-dd03d698-74c7-49f2-a273-7d5e50db328a.jpg width="60" height="60"> |

####  Table of Content
    1. Introduction
    2. Requirements
         1.1 High Level Requirements 
         1.2 Low Level Requirements
    3. 5W's and 1H
    4. SWOT Analysis
    5. Architecture
          5.1 Behavioural Diagram - Flow Chart 
          5.2 Structural Diagram - High Level Diagram
    6. Test Plan and Output
          6.1 High Level Test plan
          6.2 Low level Test Plan
    7. Output
          7.1 Instructions to execute
          7.2 Output and Program execution
          7.3 Output of Gtest
        
        
# Smart Switch Box 
## 1. Introduction

Smart Switches are basically upgraded Electronic switches which has type and power status functions to control the switch states and power status. These connected devices and appliances perform tasks or automated routines to save energy,money or time or improve security.A smart switch is different from a traditional switch in that it can control just about anything it is connected with wired appliances fans and lights. Also unlike a traditional light switch, smart switches can be controlled by remotely through a smartphone app or via a remote control by connecting to home's wifi network.Some smart switches also function as a traditional light switch ,while others can be controlled by a smart app or device.Personal preferences of how to utilize smart switches . These switches help to reduce manpower, these smart switches provide more control over our home lights, fans,refrigerator ans as well as hard wired appliances

In this project a smart switch box is created which is a combination of smart switches. Through this box we can controll appliances like fan , bulb,fridge 
below is an image to illustrate the smart switch functionality.

## smart switch

![smart_switch](https://user-images.githubusercontent.com/98812378/160234909-5c0e44e1-411b-4bc2-bab1-d843c4e54731.png)

## 2. Requirements

### 2.1 High-Level Requirements (HLR)

| ID | Description |
|---|---|
| HLR1 |It shall switch ON & OFF the bulb |
| HLR2 |It shall switch ON & OFF the bulb  |
| HLR3 |It shall switch ON & OFF the bulb  |
| HLR4 |It shall Regulate the temperature of fridge  |
| HLR5 |It shall regulate the speed of the fan  |
| HLR6 |It shall regulate the intensity/brightness of the bulb  |

### 2.2 Low Level Requirements

|Test ID| Low level requirements|
|--------|----------------|
|LL01|The temperature of the fridge shall be between 0 to 3 degree|
|LL02|The speed of the fan should be between 0 to 5|
|LL03|The brightness/intensity of the bulb should have 3 stages low , medium , high|

## 3. 5W's 1H

![5W's and 1h  Smart Switch](https://user-images.githubusercontent.com/99086668/160227841-bbf794e9-cff3-4bed-a2b9-01871dbc6bce.png)
=======



## 4. SWOT Analysis 

![swot anlysis smart switch](https://user-images.githubusercontent.com/98867688/160234445-b75b270a-087f-4031-9b48-8298c851598a.png)


## 5. Architecture
### 5.1 Behavioural Diagram - Flow Chart 


![FLOW CHART](https://user-images.githubusercontent.com/62838172/160235435-e561d76a-f394-4d98-bf50-81013d325d8e.png)

### 5.2 Structural Diagram - High Level Diagram


![High Level Diagram](https://user-images.githubusercontent.com/98867688/160238964-21e42fe7-4d18-4eaf-86be-dea8e969016b.png)

## 6. Test Plan and Output

### 6.1 High Level Test plan 

| Test Id | Description | Input |Expected Output | Actual Output | Status |
| --- | --- | --- | --- | --- | --- |
| HLT_01 | Power status | Available 1 & 0 to turn power ON & OFF status | Available: 1 & 0 to turn power ON & OFF | Available: 1 & 0 to turn power ON & OFF |:heavy_check_mark:|
| HLT_02 | Fan | Available 1 & 0 to turn power ON & OFF status | Select Fan | Select Fan | :heavy_check_mark: |
| HLT_03 | Fridge |  Available 1 & 0 to turn power ON & OFF status | Select Fridge | Select Fridge | :heavy_check_mark: |
| HLT_04 | Light Bulb | Available 1 & 0 to turn power ON & OFF status | Select Light Bulb | Select Light Bulb | :heavy_check_mark: |

### 6.2 Low level Test Plan 

* LOW LEVEL TEST PLAN FOR HLTP1

| Test Id | Description | Input |Expected Output | Actual Output | Status |
| --- | --- | --- | --- | --- | --- |
| LLT_01 | Display the power status | Available: 1 => ON 0 => OFF | turn 1 to power ON & turn 0 to power OFF | turn 1 to power ON & turn 0 to power OFF | :heavy_check_mark: |
| LLT_02 | It control ON & OFF status of fan | Available: 1 => ON 0 => OFF | turn 1 to power ON & turn 0 to power OFF |  turn 1 to power ON & turn 0 to power OFF | :heavy_check_mark: |
| LLT_03 | It control ON & OFF status of fridge | Available: 1 => ON 0 => OFF | turn 1 to power ON & turn 0 to power OFF | turn 1 to power ON & turn 0 to power OFF | :heavy_check_mark: |
| LLT_04 | It control ON & OFF status of light bulb | Available: 1 => ON 0 => OFF | turn 1 to power ON & turn 0 to power OFF | turn 1 to power ON & turn 0 to power OFF | :heavy_check_mark: |

* LOW LEVEL TEST PLAN FOR HLTP2

| Test Id | Description | Input |Expected Output | Actual Output | Status |
| --- | --- | --- | --- | --- | --- |
| LLT_05 | regulate the speed of the fan | regulate range between(0-5) | It showing speed of the fan according to range | It showing speed of the fan according to range | :heavy_check_mark: |
| LLT_06 | regulate the temperature of the fridge | regulate range between(0-100) | It showing temperature of the fridge according to range |  It showing temperature of the fridge according to range | :heavy_check_mark: |
| LLT_07 | regulate the intensity of the light bulb | regulate range between(0-2) | It showing intensity of the light bulb according to range |  It showing intensity of the light bulb according to range | :heavy_check_mark: |


## 7. Output
### 7.1 Instructions to execute :

* Clone the repository
* Go to 3_Implementation folder (change directory to 3_Implementation folder using wsl terminal)
* Make sure your system meets all software and hardware requirements
* Run "make" command in terminal for main code execution
* Run "make run" command in terminal for main code execution
* Run "make runtest" command in terminal for Gtest.

### 7.2 Output and Program execution :

![Procedure to run](https://user-images.githubusercontent.com/98867688/163672753-7f64ec0c-179b-4f28-893b-ff69fce1865e.png)

### 7.3 Output of Gtest :

![Gtest output](https://user-images.githubusercontent.com/98867688/163672759-3f9fce6e-961b-4098-a075-b254869bd322.png)






