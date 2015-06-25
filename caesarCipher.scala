/**********
*Caesar Cipher
*By Tom Biju
**********/
import scala.util.Random	//library for generating random numbers
object CaesarCipher extends App{
	var userText=""	//string variable to store user input
	var key=0	//integer variable to store the key
	var choice=""	//string variable to check user input
	val r=scala.util.Random	//integer value that is a random number
	var processedText=""	//string variable to store encoded text/decoded text
	var index=0	//integer variable to store the new index when calculating the shift of indices for a new letter according to the key
	var found=false //boolean variable to prevent the nested for loop from adding in more letters than necessary if the letter is found
	val alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ"	//string used instead of declaring an array since it is an array of characters 
	while(choice!="0"){
		println("Press 1 to encode, or 2 to decode(0 to quit)")
		choice=readLine()
		if(choice!="1"&&choice!="2"&&choice!="0"){
			println("Invalid option, please choose again...")
		}
		else if(choice=="1"){
			encode()
		}
		else if(choice=="2"){
			decode()
		}
	}
	def encode(){
		println("Please enter the text you would like to encode: ")
		userText=readLine().toUpperCase
		println("Would you like to enter the key (Press 1) or get a random key (Press 2)?")
		choice=readLine()
		if(choice=="1"){
			println("Enter the key: ")
			key=readLine().toInt
		}
		else if(choice=="2"){
			key=r.nextInt(25)
			println(s"The key is $key")
		}
		for(a<-0 to userText.length-1){
			found=false
			for(j<-0 to alphabet.length-1){
				if(userText(a)==alphabet(j)&&found==false){
					index=(j+key)%(alphabet.length)//math to support wrap around functionality for the alphabet string
					processedText+=alphabet(index)//EX:If the key is 2 and the letter we are trying to encode is Z: index of z=25,25+2=27, alphabet.length==26,
					found=true					//27%26=1, alphabet(1)==B, and that is what Z would be expected to be encoded to with a key of 2 in the Caesar Cipher
				}
			}
			if(found==false){
					processedText+=userText(a)
				}
		}
	    println(processedText)
		processedText=""
	}
	def decode(){
		println("Please enter the text you would like to decode: ")
		userText=readLine().toUpperCase
		println("Enter the key: ")
		key=readLine().toInt
		for(a<-0 to userText.length-1){
			found=false
			for(j<-0 to alphabet.length-1){
				if(userText(a)==alphabet(j)&&found==false){
					index=j-key
					if(index<0){
						index=index*(-1) //math to support wrap around functionality for the alphabet strin, from the back to the front
						index=alphabet.length-index //EX:If the key is 2 and the letter we are trying to decode is A: index of A=0,0-2=-2, alphabet.length==26,
					}                               //-2*-1=2,26-2=24 alphabet(24)==Y, and that is what A would be expected to be decoded to with a key of 2 in the Caesar Cipher
					processedText+=alphabet(index)
					found=true					
				}
			}
			if(found==false){
					processedText+=userText(a)
			}
		}
		println(processedText)
		processedText=""
	}
} 
