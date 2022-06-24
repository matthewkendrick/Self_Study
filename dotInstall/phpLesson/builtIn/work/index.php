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
          $n = 5.6283;
          // echo ceil($n) . '<br>';
          // echo floor($n) . '<br>';
          // echo round($n) . '<br>';
          // echo round($n, 2) . '<br>';

          $rand1 = mt_rand(1, 100) . '<br>';
          $rand2 = mt_rand(1, 100) . '<br>';

          echo $rand1 . '<br>';
          echo $rand2 . '<br>';
          echo max($rand1, $rand2) . '<br>';
          echo min($rand1, $rand2) . '<br>';

        ?>
      </p>
    </div>
  </section>
  
</body>
</html>