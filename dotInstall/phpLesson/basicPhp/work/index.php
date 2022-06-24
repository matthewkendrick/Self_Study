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
          function sum(...$numbers)
          {
            $total = 0;
            foreach ($numbers as $key => $number) {
              $total += $number;
            }
            return $total;
          }

          echo sum(1, 3, 5). '<br>';
          echo sum(4, 2, 5, 1). '<br>';
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>