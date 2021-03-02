import java. util. ArrayList;
import java. util. Arrays;
class User {
    ArrayList<Integer> nums = new ArrayList<>(
    Arrays.asList(-8,-7,-6,-5,-4,-3,-2,-1,1,2,3,4,5,6,7,8));
  int rank=-8,progress=0,myprogress=0;
    public void incProgress(int prog)throws IllegalArgumentException{
      if((prog<9&&prog>-9) && prog!=0 ){ // good 
        if(prog==rank)
        myprogress+=3;
        else if(rank-prog ==1|| (rank==1&&prog==-1))
          myprogress+=1;
        else if(prog>rank)
          {
           myprogress+= 10* Math.pow((nums.indexOf(rank)-nums.indexOf(prog)),2);
          rank =nums.get( (int)(myprogress/100));    }
          progress=Math.abs(myprogress%100);
        if(myprogress>1500)
          progress=0;
      } 
     else 
       throw new IllegalArgumentException("invalid"); 

    }
  
}
//changed