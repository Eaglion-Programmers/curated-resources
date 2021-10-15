<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossorigin="anonymous">
<body style="color: white; background-image: url('bg1.jpg'); background-repeat: no-repeat;background-size:cover;">
<?php 
$result = "";
$result1 = "";
class prac_1
{
    var $a;
    var $b;

    function check($oprator)
    {
        switch($oprator)
        {
            case '+':
            return $this->a + $this->b;
            break;
            case '-':
            return $this->a - $this->b;
            break;
            case '*':
            return $this->a * $this->b;
            break;
            case '/':
            return $this->a / $this->b;
            break;
            default:
            return "Sorry No command found";
        }   
    }
    function result($a, $b, $c)
    {
        $this->a = $a;
        $this->b = $b;
        return $this->check($c);
    }
}

$cal = new prac_1();
if(isset($_POST['submit']))
{   
    $result = $cal->result($_POST['n1'],$_POST['n2'],$_POST['op']);   
}

// Comparison operators cha code
if(isset($_POST['submit']))
{
    if($_POST['n1'] == $_POST['n2'])
    {
    	 $result1="Both numbers are same";
    }else if($_POST['n1'] < $_POST['n2'])
    {
    	 $result1="num1 is less than num2";
    }else if($_POST['n1'] > $_POST['n2'])
    {
    	 $result1="num1 is greator than num2";
    }
}

// Increment / Decrement  operators cha code
if(isset($_POST['submit']))
{
 $x = $_POST['n1'];  
 $y = $_POST['n1'];  
 $z = $_POST['n1'];  
 $w = $_POST['n1'];  
}

// Assignment operators cha code
if(isset($_POST['submit']))
{
 $p = $_POST['n1'];
 $p += 100;  
 $q = $_POST['n1'];
 $q -= 30;  
  
}
?>
<form method="post">
<table align="center">
    <tr>
        <td>Enter 1st Number</td>
        <td><input type="number" name="n1" required ></td>
    </tr>
    <tr>
        <td>Enter 2nd Number</td>
        <td><input type="number" name="n2" required></td>
    </tr>
    <tr>
        <td>Select Oprator</td>
        <td><select name="op">
            <option value="+">Addition</option>
            <option value="-">Substraction</option>
            <option value="*">Multiplication</option>
            <option value="/">Division</option>
        </select></td>
    </tr>
    <tr>
        <td></td>
        <td><input type="submit" name="submit" value="        Calculate        "></td>
    </tr>
</table>
<br><br>

</form>

<table style="border-spacing: 10px;">
	<tr>
	<td style="border:solid white 2px; height: 250px;  margin-right: 20px;padding-left: 10px;padding-right: 10px; ">
		<strong><h4 style="color: grey;">Arithmatic output </h4><h2><center><?php echo $result; ?></h2></center><strong>
	</td>

	<TD style="border:solid white 2px; height: 250px;  margin-right: 20px;padding-left: 10px;padding-right: 10px; ">
		<h4 style="color: grey;">Comparison output</h4><h4><center><?php echo $result1; ?></h4></center>

	</TD>

	<td style="border:solid white 2px; height: 250px;  margin-right: 20px;padding-left: 10px;padding-right: 60px; ">
		<h4 style="color: grey;">Inc / Dec output</h4>
    	<h4><center><?php echo "Pre-increment num1:"."      ". ++$x; ?></h4></center>
    	<h4><center><?php echo "Post-increment num1:"."      ". $y++; ?></h4></center>
    	<h4><center><?php echo "Pre-decrement num1:"."      ". --$z; ?></h4></center>
    	<h4><center><?php echo "Post-decrement num1:"."      ". $w--; ?></h4></center>
	</td>

	<td style="border:solid white 2px; height: 250px;  margin-right: 20px;padding-left: 10px;padding-right: 10px; ">
		<h4 style="color: grey;">Assignment output</h4>
		<h4><center><?php echo "ading 100 to num1:"."      ". $p; ?></h4></center>
		<h4><center><?php echo "substracting 2 from num1:"."      ". $q; ?></h4></center>

	</td>
	</tr>
</table>



</body>
</html>
