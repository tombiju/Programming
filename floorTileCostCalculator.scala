//Find Cost of Tile to Cover W x H Floor By Tom Biju
import scala.math.BigDecimal;
object floorTileCost extends App{
	var cost=0.00
	var price=0.00
	var width=0.00
	var height=0.00
	println("Enter the cost per square area of tile: ")
	price=readLine().toDouble
	println("Enter the width of the floor")
	width=readLine().toDouble
	println("Enter the height of the floor")
	height=readLine().toDouble
	cost=height*width*price
	var trueCost=BigDecimal(cost).setScale(2)
	println("The cost of covering a "+width+" by "+height+" floor is $"+trueCost)
}
