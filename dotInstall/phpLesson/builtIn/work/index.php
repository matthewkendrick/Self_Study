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
          $scores = [
            'Mike' => 80,
            'Anna' => 70,
            'Matthew' => 60,
          ];

          $data = [
            ['name' => 'Mike',    'score' => 80],
            ['name' => 'Anna',    'score' => 60],
            ['name' => 'Matthew', 'score' => 70],
            ['name' => 'Emma',    'score' => 60],
          ];

          usort(
            $data,
            function ($a, $b) {
              if ($a['score'] === $b['score']) {
                return 0;
              }
              return $a['score'] > $b['score'] ? 1 : -1;
            }
          );

          print_r($data);
          echo '<br><br>';
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>