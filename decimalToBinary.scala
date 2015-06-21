object DecimaltoBinary{
	def decimal2binary(base10Number:Int){
		var quotient=base10Number/2
		var remainder=base10Number%2
		var answer=" "
		if(remainder==10){
				answer="A"
			}
		else if(remainder==11){
			answer="B"
		}
		else if(remainder==12){
			answer="C"
		}
		else if(remainder==13){
			answer="D"
		}
		else if(remainder==14){
			answer="E"
		}
		else if(remainder==15){
			answer="F"
		}
		else if(remainder==16){
			answer="G"
		}
		else{
			answer=remainder.toString
		}
		var amIdone="not done"
		
		while(amIdone!="done"){
			remainder=quotient%2
			quotient=quotient/2
			if(remainder==10){
				answer="A"+answer
			}
			else if(remainder==11){
				answer="B"+answer
			}
			else if(remainder==12){
				answer="C"+answer
			}
			else if(remainder==13){
				answer="D"+answer
			}
			else if(remainder==14){
				answer="E"+answer
			}
			else if(remainder==15){
				answer="F"+answer
			}
			else if(remainder==16){
				answer="G"+answer
			}
			else{
				answer=(remainder.toString)+answer
			}
			if((quotient/2)==0){
				remainder=quotient%2
				if(remainder==10){
				answer="A"+answer
				}
				else if(remainder==11){
				answer="B"+answer
				}
				else if(remainder==12){
				answer="C"+answer
				}
				else if(remainder==13){
				answer="D"+answer
				}
				else if(remainder==14){
				answer="E"+answer
				}
				else if(remainder==15){
				answer="F"+answer
				}
				else if(remainder==16){
				answer="G"+answer
				}
				else if(remainder==0){
					
				}
				else{
				answer=(remainder.toString)+answer
				}
				amIdone="done"
			}
		}
		println(answer)
	}
	def main(args:Array[String]){
		println("Enter the decimal number you want to convert:")
		val x=readLine().toInt
		decimal2binary(x)
	}
}
