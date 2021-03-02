#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool check(vector< vector<string> >table,unsigned int row,unsigned int col){
for (int nrow=-1;nrow<2;nrow++)
for(int ncol=-1;ncol<2;ncol++) {
    if(ncol==0&&nrow==0)continue;
    
int sum_row=nrow+row,sum_col =ncol+col,count=0;
while(sum_row>=0&&sum_col>=0 && count <3&&sum_row<7&&sum_col<6)
{if (table[sum_row][sum_col]==table[row][col]) {
  sum_row+=nrow; sum_col+=ncol;
  count ++;}  
  else  break;} 
if (count ==2)
if(row-nrow>=0 && col-ncol>=0 &&row-nrow<7&&col-ncol<6)
if (table[row-nrow][col-ncol]==table[row][col])
count++;
if (count==3)return true;}
return false;}
std::string who_is_winner(std::vector<std::string> pieces_position_list)
{  vector< vector<string> > table(7,vector<string>(6,"0"));
  for (auto &s:pieces_position_list) {
       string sub =s.substr(2);
     unsigned  int ind=0;
         for(unsigned int j=0;j<table[s.at(0)-65].size();j++)
         if(table[s.at(0)-65][j]=="0") {
     ind =j;
         table[s.at(0)-65][j]= sub; 
     break;}
      if (check(table,s.at(0)-65,ind))
      return table[s.at(0)-65][ind];
    
      }
  return "Draw";}