//String Reverser
//By Tom Biju
object Reverser extends App{
	println("Enter a string you would like to reverse: ")
	var string=""
	string=readLine()
	var newString=""
	var end=string.length-1
	for(a<-0 to string.length-1){
		newString+=string(end)
		end-=1
	}
	println(newString)
}
