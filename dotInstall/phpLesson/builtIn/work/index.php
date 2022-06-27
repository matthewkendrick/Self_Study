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
          class Post
          {
            private $text;
            private $likes = 0;

            public function __construct($text)
            {
              $this->text = $text;
            }

            public function show()
            {
              printf('%s (%d)' . '<br>', $this->text, $this->likes);
            }

            public function like()
            {
              $this->likes++;

              if ($this->likes > 100) {
                $this->likes = 100;
              }
            }
          }
          
          $posts = [];
          $posts[0] = new Post('hello');
          $posts[1] = new Post('hello again');

          $posts[0]->like();

          $posts[0]->show() . '<br>';
          $posts[1]->show() . '<br>';

        ?>
      </p>
    </div>
  </section>
  
</body>
</html>