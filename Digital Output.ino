// ============================================================================
// Project: Arduino-Digital-Output
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

const int LED = 1;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  digitalWrite(LED, HIGH);
  delay(1000);
  
  digitalWrite(LED, LOW);
  delay(1000);
}

// Author Footprint: //Pranjal Das
