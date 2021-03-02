struct Decoder {
  static std::string decode (const std::string& p_what) {  
    std::string sen ="bdhpF,82QsLirJejtNmzZKgnB3SwTyXG ?.6YIcflxVC5WE94UA1OoD70MkvRuPqHa";
    std::string dcode =p_what;
      for(unsigned int j =0;j<p_what.length();j++){
         for(unsigned int i =0;i<sen.length();i++)  {
        if(p_what[j]==sen[i]){
          int sub = i-j;
          while (sub <=0) sub = sen.length()+sub;
          dcode.at(j)=sen.at(sub-1);
          }   }   }
    return dcode;
  }
};