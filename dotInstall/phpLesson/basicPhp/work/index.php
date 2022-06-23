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
          define('FIRST_NAME', 'Anna');
          // echo FIRST_NAME . PHP_EOL;

          const LAST_NAME = 'Kendrick';
          // echo LAST_NAME . PHP_EOL;

          echo FIRST_NAME.' '.LAST_NAME;
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>