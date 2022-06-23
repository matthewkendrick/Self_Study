<!DOCTYPE html>
<html lang="ja">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="../css/stylesheet.css">
  <title>Document</title>
</head>
<body>
  <section>
    <div class="text">
      <p>
        <?php

        $rate = 1.1;

        function sum($a, $b, $c) 
         {
           global $rate;
          //  $rate = 1.08;
           return ( $a + $b + $c ) * $rate;
         }

         echo sum(100, 200, 300);
         echo '<br>';
         echo sum(300, 400, 500);
         echo '<br>';
         echo sum(100, 200, 300) + sum(300, 400, 500);
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>