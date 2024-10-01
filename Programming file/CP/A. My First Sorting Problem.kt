import java.util.*;

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`)
    
    var t:Int = sc.nextInt()
    while(t > 0)
    {
      t = t - 1
      
      var x:Int = sc.nextInt()
      var y:Int = sc.nextInt()
      
      if(x > y)
      {
        var temp:Int = x
        x = y
        y = temp
      }
      
      var ans = x.toString() + " " + y.toString()
      println(ans)
    }
}