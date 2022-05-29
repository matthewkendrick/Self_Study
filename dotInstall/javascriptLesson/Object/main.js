'use strict'

{
  const posts = [
    {
      text: 'JavaScriptの勉強中...',
      likeCount: 0,
    },
    {
      text: 'プログラミング楽しい！',
      likeCount: 10,
    },
  ];

  function show(post) {
    console.log(`${post.text} - ${post.likeCount}いいね`);
  }

  show(posts[1]);
}