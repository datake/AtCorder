/*functionalに書こうと思ったけどうまくfunctionalにかけなかった.*/
object Main {
  def main(args:Array[String]) {
    val N = scala.io.StdIn.readLine().toInt
    printABC("",N)
   }
   def printABC (front:String,N:Int){
     if(N!=0){
         printABC(front+"a",N-1);
         printABC(front+"b",N-1);
         printABC(front+"c",N-1);
     }else{
       println(front);
     }
   }
}
