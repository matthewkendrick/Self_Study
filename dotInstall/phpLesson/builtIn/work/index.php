<!DOCTYPE html>
<html lang="ja">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="../css/stylesheet.css">
  <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
  <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Rounded:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />
  <title>Document</title>
</head>
<body>
  <section>
    <div class="text">
      <p>
        <?php
          // $scores = array_fill(0, 5, 10);
          $a = [3, 4, 8];
          $b = [4, 8, 12];

          // array_diff(X, Y)の内、XからYを引いたもの
          $diff1 = array_diff($a, $b);
          print_r($diff1);
          echo '<br>';

          $diff2 = array_diff($b, $a);
          print_r($diff2);
          echo '<br>';

          // array_diff(X, Y)の内、XとYの共通項
          $common = array_intersect($a, $b);
          print_r($common);
          echo '<br>';
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>