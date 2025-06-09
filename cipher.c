static void Cipher(void)
{
  uint8_t round = 0;

  AddRoundKey(0); 

  for(round = 1; round < Nr; ++round)
  {
    SubBytes();
    ShiftRows();
    MixColumns();
    AddRoundKey(round);
  }

  SubBytes();
  ShiftRows();
  AddRoundKey(Nr);
}