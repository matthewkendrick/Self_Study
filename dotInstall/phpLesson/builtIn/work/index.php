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
            public $text;
            public $likes;

            public function show()
            {
              printf('%s (%d)' . '<br>', $this->text, $this->likes);
            }
          }
          
          $posts = [];
          $posts[0] = new Post();
          $posts[0]->text = 'hello';
          $posts[0]->likes = 0;

          $posts[1] = new Post();
          $posts[1]->text = 'hello again';
          $posts[1]->likes = 1;

          $posts[0]->show() . '<br>';
          $posts[1]->show() . '<br>';
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>