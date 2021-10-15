<!DOCTYPE html>
<html>
<body>

<?php
class Student {
  public $name;
  public $color;

  function __construct($name) {
    $this->name = $name; 
  }
  function __destruct() {
    echo "The Student is {$this->name}."; 
  }
}

$Siddhi = new Student("Siddhi");
?>
 
</body>
</html>
