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
          for ($i=1; $i <= 10; $i++) { 
            if ($i % 3 === 0) {
              continue;
              // break;
            }
            echo "$i <br>" . PHP_EOL;
          }
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>