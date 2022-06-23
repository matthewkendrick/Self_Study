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

          // declare(strict_types=1);

          function getAward(int $score): ?string
          {
            return $score >= 100 ? '<span class="material-symbols-rounded">workspace_premium</span>' : null;
          }

          echo getAward(150) . '<br> Congratulations!!!' . PHP_EOL;
          echo getAward(40) . '<br>' . PHP_EOL;
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>