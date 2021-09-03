int strCmp(const char* s1, const char* s2) {
   i = 0
   loopif(s1[i] and s2[i] are not null and s1[i] == s2[i]) {
      i++;
   }
   return s1[i] - s2[i];
}