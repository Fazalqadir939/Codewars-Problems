public class Banjo {
  public static String areYouPlayingBanjo(String name) {
    char a = name.charAt(0);
   if(a=='R'||a=='r'){
     return name + " plays banjo" ;
   }
    else{
      return name + " does not play banjo";
    }
    // Program me!
  }
}