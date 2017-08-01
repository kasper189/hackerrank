object Solution {

  def simpleArraySum(n: Int, ar: Array[Int]): Int =  {
    // Complete this function
    ar.length match {
      case 0 => 0
      case _ => ar reduceLeft { _ + _ }
    }
  }

  def main(args: Array[String]) {
    val sc = new java.util.Scanner (System.in);
    var n = sc.nextInt();
    var ar = new Array[Int](n);
    for(ar_i <- 0 to n-1) {
      ar(ar_i) = sc.nextInt();
    }
    val result = simpleArraySum(n, ar);
    println(result)
  }
}
