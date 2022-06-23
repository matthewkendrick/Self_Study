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

          // declare(strict_types=1);

          function showInfo(string $name, int $score) :void
          {
            echo $name . ': ' . $score . '<br>' . PHP_EOL;
          }

          showInfo('Anna', 50);
          showInfo('Anna', '50');
          // showInfo('Anna', 'text');
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>