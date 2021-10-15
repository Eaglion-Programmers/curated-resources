<?php 
define('STDIN',fopen("php://stdin","r")); 
echo "Menu <br>";
echo "1:  Factorial<br>";
echo "2: Prime no<br>";
echo "3: Even ODD<br>";
echo "4: Positive/Negative<br>";
echo "Enter a number: ";

?>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
	<input type="number" name="choise">
	<button type="submit">Calculate</button>
</form>

<?php
if (isset($_POST['choise'])) {
	
$number=$_POST['choise'];



switch ($number) {
  case 1: 
  			$num = 4;  
			$factorial = 1;  
			for ($x=$num; $x>=1; $x--)   
			{  
			  $factorial = $factorial * $x;  
			}  
			echo "Factorial of $num is $factorial"; 
  break;

  case 2: 
		function IsPrime($n)
		{
		 for($x=2; $x<$n; $x++)
		   {
		      if($n %$x ==0)
			      {
				   return 0;
				  }
		    }
		  return 1;
		   }
		$a = IsPrime(3);
		if ($a==0)
		echo '3 is not a Prime Number.....'."\n";
		else
		echo '3 is a Prime Number..'."\n";

   break;

  case 3: 
		  $number=1233456;  
			if($number%2==0)  
			{  
			 echo "$number is Even Number";   
			}  
			else  
			{  
			 echo "$number is Odd Number";  
			}   
   break;
  case 4: 
  		function CheckNumber($x) {
		  if ($x > 0)
		    {$message = "$x Positive number";}
		  if ($x == 0)
		    {$message = "Zero";}
		  if ($x < 0)
		    {$message = "$x Negative number";}
		  echo $message."\n";
		}
		CheckNumber(5.5);
		CheckNumber(-10.8);
   break;
  default: echo "<br><br>Please enter valid choise\n";
}
}
?>