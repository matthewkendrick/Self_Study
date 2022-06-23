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
          for ($i=1; $i < 10 + 1; $i++) { 
            // echo 'Hello <br>' . PHP_EOL;
            echo "$i - Hello <br>" . PHP_EOL;
          }
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>