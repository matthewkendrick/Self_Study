'use strict'

{
  const posts = [
    {
      text: 'JavaScriptの勉強中...',
      likeCount: 0,
      show() {
        console.log(`${this.text} - ${this.likeCount}いいね`);
      }
    },
    {
      text: 'プログラミング楽しい！',
      likeCount: 10,
    },
  ];

  posts[0].show();
}