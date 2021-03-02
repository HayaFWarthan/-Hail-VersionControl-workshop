import java.util.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
//change2

class Kata {
  static public List<Integer> treeByLevels (Node node ){
        if(node==null)
  return Collections.emptyList();
      List<Node> list = new ArrayList<Node>(); 
        List<Integer> vals = new ArrayList<Integer>(); 
      list.add(node);
    for(int i=0;i<list.size();i++){
    if(list.get(i).left!=null)
      list.add(list.get(i).left);
   if(list.get(i).right!=null)
      list.add(list.get(i).right);       }
    
          for(int i=0;i<list.size();i++)
          vals.add(list.get(i).value);
    
  return vals;
  
  } 
  }
//changed