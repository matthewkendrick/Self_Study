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
          $a = 'hello';
          $b = 10;
          $c = -1.3;
          $d = null;
          $e = true;

          var_dump($a);
          echo '<br>';
          var_dump($b);
          echo '<br>';
          // var_dump($c);
          // echo '<br>';
          // var_dump($d);
          // echo '<br>';
          // var_dump($e);

          $a = (float)10;
          $b = (string)1.3;

          echo '<p class="border"></p>';
          var_dump($a);
          echo '<br>';
          var_dump($b);
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>