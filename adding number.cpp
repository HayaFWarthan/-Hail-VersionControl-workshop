#include <string>
#include <sstream> 
#include <cstdlib> 
using namespace std; 
std::string add(const std::string& a, const std::string& b) {
string result;

int rem=0;
string na=a;
string nb =b;
if(a.length()> b.length()){
string b2(a.length()-b.length(),'0');
nb = b2+b;

}
else if(a.length()< b.length()){
string a2(b.length()-a.length(),'0'); 
na=a2+a;}
cout << na <<"   "<<nb<<endl;

for( int i =nb.length()-1;i>=0;i--){
int sum = na[i] +nb[i]+rem -96;
if ( sum >=10 && i==0){
string t= to_string(sum);
char temp =t.at(0);
t.at(0)=t.at(1);
t.at(1)=temp;

result += t;
}
else if (sum >=10) {
rem = 1;
sum-= 10;
result += to_string(sum);
}
else {
rem =0;
result += to_string(sum);
}

}
string r="";
for (int i =result.length()-1;i>=0;i--){
r+= result.at(i);
}
  return r;
}