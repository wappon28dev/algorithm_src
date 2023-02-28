# ２年学年末 アルゴリズムまとめ

## 目次

<details><summary>クリック/タップ して目次を表示</summary><div>

- [２年学年末 アルゴリズムまとめ](#２年学年末-アルゴリズムまとめ)
  - [目次](#目次)
  - [5-3 スタックとキュー](#5-3-スタックとキュー)
    - [☆ スタックとキューとは](#-スタックとキューとは)
      - [スタック](#スタック)
      - [キュー](#キュー)
      - [スタックとキューの違い](#スタックとキューの違い)
    - [☆ さらに詳しく](#-さらに詳しく)
      - [スタック](#スタック-1)
      - [キュー](#キュー-1)
    - [☆ 書き方](#-書き方)
      - [スタック](#スタック-2)
      - [キュー](#キュー-2)
    - [☆ 教科書問題](#-教科書問題)
      - [スタックに文字を格納する](#スタックに文字を格納する)
      - [キューに文字を格納する](#キューに文字を格納する)
      - [５章 章末問題](#５章-章末問題)
  - [6-1 探索](#6-1-探索)
    - [☆ 探索とは](#-探索とは)
    - [☆ さらに詳しく](#-さらに詳しく-1)
      - [線形探索](#線形探索)
      - [二分探索](#二分探索)
    - [☆ 教科書問題](#-教科書問題-1)
  - [6-2 線形探索](#6-2-線形探索)
    - [☆ 線形探索 とは](#-線形探索-とは)
    - [☆ さらに詳しく](#-さらに詳しく-2)
    - [☆ 書き方](#-書き方-1)
    - [☆ 教科書問題](#-教科書問題-2)
      - [線形探索による単語帳からの単語の検索](#線形探索による単語帳からの単語の検索)
  - [6-3 二分探索](#6-3-二分探索)
    - [☆ 二分探索 とは](#-二分探索-とは)
    - [☆ さらに詳しく](#-さらに詳しく-3)
    - [☆ 書き方](#-書き方-2)
    - [☆ 教科書問題](#-教科書問題-3)
      - [線形探索による単語帳からの単語の検索](#線形探索による単語帳からの単語の検索-1)
  - [5-1 基本的なデータ構造](#5-1-基本的なデータ構造)
    - [☆ 配列とレコードとは](#-配列とレコードとは)
    - [☆ さらに詳しく](#-さらに詳しく-4)
      - [配列](#配列)
      - [レコード](#レコード)
    - [☆ 書き方](#-書き方-3)
      - [配列](#配列-1)
      - [レコード](#レコード-1)
    - [☆ 教科書問題](#-教科書問題-4)
      - [構造体配列への格納と一覧表示](#構造体配列への格納と一覧表示)
  - [5-2 リストと木構造](#5-2-リストと木構造)
    - [☆ リスト・木構造とは](#-リスト木構造とは)
      - [リスト](#リスト)
      - [木構造](#木構造)
    - [☆ さらに詳しく](#-さらに詳しく-5)
      - [リスト](#リスト-1)
      - [木構造](#木構造-1)
    - [☆ 書き方](#-書き方-4)
      - [リスト](#リスト-2)
        - [連結リストの表示](#連結リストの表示)
        - [リスト最後尾へのデータの追加](#リスト最後尾へのデータの追加)
      - [木構造](#木構造-2)
    - [☆ 教科書問題](#-教科書問題-5)
      - [構造体の配列を使ったリストのプログラム](#構造体の配列を使ったリストのプログラム)
      - [２分木に格納された文字の表示](#２分木に格納された文字の表示)
  - [ref](#ref)

</div></details>

## 5-3 スタックとキュー

### ☆ スタックとキューとは

#### スタック

上へ上へと積み重ねてデータを格納していくようなデータ構造を **スタック (stack)** という.  
最後に格納したデータから順番に取り出していく → **後入れ先出し方式 (LIFO/Last-In First-Out)**

![](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200112111826.gif)

#### キュー

並んでいる列のようにデータを格納していくようなデータ構造を **キュー (queue)** という.  
最初に格納したデータから順番に取り出していく → **先入れ先出し方式 (FIFO/First-In First-Out)**

![](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200112111822.gif)

#### スタックとキューの違い

アニメーションは世界を救う

![](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20191025081622.gif)

### ☆ さらに詳しく

#### スタック

スタックにデータを格納することを **プッシュ (push)** という.  
また, スタックからデータを取り出すことを **ポップ (pop)** という.

- プッシュとポップの２つの操作だけでデータの出し入れが行える.  
  → プログラムを完結にすることができる

- スタックに格納されたデータは, 一番上にあるデータから順番に取り出される.  
  → スタックの途中に格納されたデータに自由にアクセスすることはできない

データを格納するための領域 ~~(スタック領域)~~ は, 予想よりも余裕をもって設定する必要がある.  
スタック領域を使って多くデータを格納すると, (スタック) **オーバーフロー (overflow)** が起きる.  
また, スタック領域からデータを多く取り出そうとすると, (スタック) **アンダーフロー (underflow)** が起きる.

|                    | index | value |
| -----------------: | :---: | ----- |
|                    |   5   |       |
|                    |   4   |       |
| スタックポインタ → |   3   | ←←← D |
|              (top) |   2   | C     |
|                    |   1   | B     |
|           (bottom) |   0   | A     |

&emsp;&emsp;&emsp;&emsp;&emsp;stack&emsp;↓↓↓&emsp;スタックポインタを１増やす

|                    | index | value |
| -----------------: | :---: | ----- |
|                    |   5   |       |
| スタックポインタ → |   4   |       |
|              (top) |   3   | D     |
|                    |   2   | C     |
|                    |   1   | B     |
|           (bottom) |   0   | A     |

&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;pop&emsp;↓↓↓&emsp;スタックポインタを１減らす

|                    | index | value |
| -----------------: | :---: | ----- |
|                    |   5   |       |
|                    |   4   |       |
| スタックポインタ → |   3   | →→→ D |
|              (top) |   2   | C     |
|                    |   1   | B     |
|           (bottom) |   0   | A     |

#### キュー

キューにデータを格納することを **エンキュー (enqueue)** という.  
キューからデータを取り出すことを **デキュー (dequeue)** という.

- キューは１つのデータの処理が終わる前に次のデータを送られてきても, そのデータを格納しておくことができる.  
  → キューを使ってデータをためると, そのデータを順番に処理することができる

- キューに格納されたデータは, 一番最初に格納されたデータから順番に取り出される.  
  → キューの途中に格納されたデータに自由にアクセスすることはできない

スタックと同じように, キューでもオーバーフローやアンダーフローを起こさないようにする必要がある.  
キューでは末尾ポインタがデータ数に応じて進むので, スタックよりもデータ領域の消費が速い.

先頭/末尾 ポインタが記憶領域の端に来たら, 先頭に戻して記憶領域を再利用することを **リングバッファ (ring buffer)** という.

(あのえっと, SD カードとかで容量が無くなったら古いやつを上書きされるあれの感覚)

<br />

|                | index | value |
| -------------: | :---: | ----- |
|                |   0   |       |
| 先頭ポインタ → |   1   | A     |
|                |   2   | B     |
|                |   3   | C     |
| 末尾ポインタ → |   4   | ←←← D |
|                |   5   |       |

&emsp;&emsp;&emsp;&emsp;&emsp;enqueue&emsp;↓↓↓&emsp;末尾ポインタを 1 増やす

|                | index | value |
| -------------: | :---: | ----- |
|                |   0   |       |
| 先頭ポインタ → |   1   | A     |
|                |   2   | B     |
|                |   3   | C     |
|                |   4   | D     |
| 末尾ポインタ → |   5   |       |

&emsp;&emsp;&emsp;&emsp;&emsp;dequeue&emsp;↓↓↓&emsp;先頭ポインタを 1 増やす

|                | index | value |
| -------------: | :---: | ----- |
|                |   0   |       |
|                |   1   | →→→ A |
| 先頭ポインタ → |   2   | B     |
|                |   3   | C     |
|                |   4   | D     |
| 末尾ポインタ → |   5   |       |

### ☆ 書き方

#### スタック

- スタックにデータを格納するための下ごしらえ

  1. データを格納する配列を用意する
  2. 次のデータを格納する配列の, 末尾からの添字 (**スタックポインタ (stack pointer)**) を宣言する

- スタックするには...？

  1. 配列の `スタックポインタ` 番目 (`data[stackPointer]`) にデータを格納する
  2. `スタックポインタ` の値を 1 増やす

- ポップするには...？
  1. `スタックポインタ` の値を 1 減らす
  2. 配列の `スタックポインタ` 番目 (`data[stackPointer]`) のデータを取り出す

#### キュー

- キューにデータを格納するための下ごしらえ

  1. データを格納する配列を用意する
  2. 次のデータを格納する配列の添字 (**末尾ポインタ (tail)**) を宣言する
  3. 次に取り出すデータの配列の添字 (**先頭ポインタ (head)**) を宣言する

- エンキューするには...？

  1. 配列の `末尾ポインタ` 番目 (`data[tailPointer]`) にデータを格納する
  2. `末尾ポインタ` の値を 1 増やす

- デーキューするには...？

  1. 配列の `先頭ポインタ` 番目 (`data[headPointer]`) のデータを取り出す
  2. `先頭ポインタ` の値を 1 増やす

### ☆ 教科書問題

#### スタックに文字を格納する

- [例題１](./p130_r1.c)
  - [練習問題](./p131_ren.c)
    - [いじいじ](./p131_ren_mod.c)

#### キューに文字を格納する

- [例題２](./p131_r2.c)
  - [練習問題](./p132_ren.c)

#### ５章 章末問題

- [３](./p131_ren_mod.c): おおむねこれ
- ４: S / Q / Q

## 6-1 探索

### ☆ 探索とは

**探索 (search)** とは, データの集合の中から指定されたデータを探し出す手法である.  
コンピュータがプログラムによりデータを処理する際に, 多くのデータの中から必要なデータを取り出すことは最も基本的な処理である.  
そのため, 探索を行うための手順や方法である **探索アルゴリズム (search algorithm)** は, たくさんある.

(課題研究であった通り, 地図から最短距離を求める A\* アルゴリズム (A\* algorithm) も有名な探索アルゴリズムの一つだよ)

探索において, 探し出そうとするデータを **キー (key)** という.  
探索アルゴリズムは, キーを探し出すことができれば, そのキーに対応するデータを探し出すことができる.  
また, 目的のデータが...

- 存在する場合: **成功探索 (successful search)**
- 存在しない場合: **失敗探索 (unsuccessful search)**

という.

### ☆ さらに詳しく

今回は, 以下の探索アルゴリズムを学ぶ.

#### 線形探索

**線形探索 (linear search/sequential search)** とは, データの集合の先頭から順に, キーと一致するデータを探し出す手法である.  
プログラムは単純であるが, 目的のデータが最後にある場合には, すべてのデータを調べる必要がある.

#### 二分探索

**二分探索 (binary search)** とは, データの集合を, キーの大小でソートした後に, キーと一致するデータを探し出す手法である.  
探索範囲を半分に絞り込むことができるので, 探索を高速化することができるが, 並び替えの作業を含めると線形探索よりも処理が増える.

### ☆ 教科書問題

なし

## 6-2 線形探索

### ☆ 線形探索 とは

上みろ ([戻る](#線形探索))

### ☆ さらに詳しく

![](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200112231008.gif)

先頭 (0 番目) の配列から順に, キーと一致するかどうかを順番にチェックする.

- キーと一致するデータ見つけられたら, 探索成功
- 最後まで一致しなかったら, 探索失敗

のようになる.

### ☆ 書き方

配列 `data` で管理しているデータの中から, キー `key` と一致するデータを探索するプログラムを書く.

1. `i` を 0 (配列の先頭) に初期化する
2. `i` が `data` の要素数より小さい間 (`i` < `data.length`), 以下の処理を繰り返す:
   1. `data` の `i` 番目 (`data[i]`) が `key` と一致するかどうかをチェックする
   2. 一致したら, `i` を返す
   3. 一致しなかったら, `i` を 1 増やす

単純明快.

### ☆ 教科書問題

#### 線形探索による単語帳からの単語の検索

- [例題１](./p142_r1.c)
  - [いじいじ](./p142_r1_mod.c)
- [練習問題](./p143_ren.c)

## 6-3 二分探索

### ☆ 二分探索 とは

上みろ ([戻る](#二分探索))

### ☆ さらに詳しく

![](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200112231100.gif)

先頭 (0 番目) の配列から順に, キーと一致するかどうかを順番にチェックする.

- キーと一致するデータ見つけられたら, 探索成功
- 最後まで一致しなかったら, 探索失敗

のようになる.

### ☆ 書き方

配列 `data` で管理しているデータの中から, キー `key` と一致するデータを探索するプログラムを書く.

1. `i` を 0 (配列の先頭) に初期化する
2. `i` が `data` の要素数より小さい間 (`i` < `data.length`), 以下の処理を繰り返す:
   1. `data` の `i` 番目 (`data[i]`) が `key` と一致するかどうかをチェックする
   2. 一致したら, `i` を返す
   3. 一致しなかったら, `i` を 1 増やす

単純明快.

### ☆ 教科書問題

#### 線形探索による単語帳からの単語の検索

- [例題１](./p142_r1.c)
  - [いじいじ](./p142_r1_mod.c)
- [練習問題](./p143_ren.c)

## 5-1 基本的なデータ構造

### ☆ 配列とレコードとは

複数のデータを効率よく処理するためのデータ同士の構成の方法として,

- 配列 (array)
- レコード (record)
- リスト (list)
- スタック (stack)
  などの構造がある.

### ☆ さらに詳しく

#### 配列

配列の添字は, `0` から始まることが多いが, プログラム言語によっては `1` から始まる場合もある. (例: Lua とか)  
また, ２つ以上の添字を組み合わせて要素を指定する配列を **多次元配列 (multi-D array)** という.  
整数値以外の文字列などを添え字にできるものもあり, その配列を **連想配列 (associative array)** という.

```ts
type Direction = "east" | "west" | "south" | "north";

type DirectionArray = {
  [key: Direction]: string;
};

const directions: DirectionArray = {
  east: "東",
  west: "西",
  south: "南",
  north: "北",
}; // -> 連想配列

// directions['east'] -> '東'
```

#### レコード

異なるデータ型の複数の要素を１つにまとめたデータ構造を **レコード (record)** という.  
レコードの要素を指定する場合, 変数名と要素名を `.` で区切って `変数名.要素名` のように表現する.  
C 言語では, `struct` 文を使って構造体を定義する.

### ☆ 書き方

#### 配列

[こちらへ戻って, どうぞ](#１次元配列)

#### レコード

C 言語では, レコードを扱うデータ構造として, **構造体 (structure)** というデータ型が用意されている.
例えば, 平面上の座標を (x, y) で表すとき (-> `POINT`)のレコード点 (`point`) は次のようになる.

```c
struct POINT {
    int x;
    int y;
} point;
```

構造体の宣言とその変数は独立させることもできる.

```c
struct POINT {
    int x;
    int y;
};

struct POINT point;
```

また, 構造体の要素は次のように指定する.

```c
point.x = 10;
point.y = 20;
```

(まあ教科書の例が悪いんですけど)  
レコードでは, １つの構造体に **複数の型** を宣言できる ~~(だから使うんだよ. んじゃなければ配列で良いのよ)~~  
例えば, 遊園地に入場させるために,

- お名前
- 身長
- 体重
- 年齢

の４つを１人の子の情報として持ちたいときに, 構造体(`PERSON`) を使う.

```c
struct PERSON {
    char *firstName[];
    char *lastName[];
    int height;
    int age;
};
```

例えば, ひょーどーの情報を持ち歩きたいとする. そういうときに構造体を継承して, `hyodo`を作ろう.

```c
struct PERSON hyodo = {
    "ひょーどー", "しゅんしゅん", 170, 17,
};
```

もう１人, たけぴ (`takepi`) が入園した. また, それも構造体を継承しよう.

```c
struct PERSON takepi = {
    ...
};
```

のように, 複数のオブジェクトの型を統一させるために使うと, それぞれのオブジェクトを配列に入れて,  
_for_ 文で回して名字だけ取るなどもできる. 嬉しいね.

### ☆ 教科書問題

#### 構造体配列への格納と一覧表示

- [例題１](./p109_r1.c)
  - [練習問題１](./p109_ren_1.c)
  - [練習問題２](./p109_ren_2.c)

## 5-2 リストと木構造

### ☆ リスト・木構造とは

#### リスト

広い意味では, データを列挙した一覧表を **リスト (list)** と呼ぶ.

- 連結リスト: 前後のデータの位置を示す情報をもったデータ構造
- 双方向リスト: 先頭側から末尾側へも, 逆方向にも要素をたどっていくことができるデータ構造
- 循環リスト: 先頭や末尾が存在せず, 円環状に要素が繋がれているデータ構造

がある.

#### 木構造

会社の組織図やトーナメント表, フォルダに整理して保存したファイルなど,  
木のように枝分かれした形で整理すると扱いやすいデータがある.  
このようなデータ構造を **木構造 (tree)** といい, 実際の木をさまさまにした形で表現することが多い.

木構造は, データが格納される **節 (node)** と２つの節を結ぶ **枝 (branch)** から構成される.  
ある節からみてすぐ上にある節を **親 (parent)** といい, すぐ下にある節を **子 (child)** という.  
また, 親を持たない最も上にある節を **根 (root)** といい, 子を持たない末端の節を **葉 (leaf)** という.

木構造の中で, １つから出る枝が２つ以下のものを特に **２分木 (binary tree)** と呼ぶ.

![tree](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200117221520.gif)  
(ref: [工業大学生ももやまのうさぎ塾](https://www.momoyama-usagi.com/entry/info-algo-tree))

### ☆ さらに詳しく

#### リスト

連結リストでは, リストの個々の要素が収納される **データ部** と, 次の要素の位置を示す **参照部 (ポインタ/リンク)** という.
また, 先頭を示すポインタ (`HEAD`) と, 最後尾を示すヌル文字 (`NULL`) を入れることが多い.  
連結リストには次のような特徴がある.

- データ数の増減が可能
- データの追加・削除が容易
- データを取る出すには, 先頭からたどらなければならない

これを実装する場合に, データ型としてリストが用意されていないとき,  
レコードと配列を使って連結リストを使って連結リストを実現することができる.

| 添字 | データ部 | 参照部 |
| ---- | -------- | ------ |
| 0    | _HEAD_   | 1      |
| 1    | `A`      | 2      |
| 2    | `B`      | 4      |
| 3    | `D`      | 5      |
| 4    | `C`      | 3      |
| 5    | `E`      | _NULL_ |
| 6    |          |        |

順番に取り出していくと, 次のようにデータを取り出すことができる:

> _HEAD_ → `A` → `B` → `C` → `D` → `E` → _NULL_

#### 木構造

表示などの処理をするために, ２分木からデータを取り出して, 節から順番に  
枝をなぞるように辿っていくことを **木の走査 (traversal)** という.  
木の走査は, 節と左右の部分木のなぞり方の順序には３つの種類がある.

- **前順走査 (preorder traversal)**

  > 最初に節を走査し, 次に左の部分木を, 最後に右の部分木を操作する方法.  
  >  ![preorder-traversal](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200118192915.gif)  
  >  (ref: [工業大学生ももやまのうさぎ塾](https://www.momoyama-usagi.com/entry/info-algo-tree-traverse))

- **間順走査 (inorder traversal)**

  > 最初に左の部分木を走査し, 次に節を, 最後に右の部分木を走査する方法.
  > ![inorder-traversal](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200118192923.gif)  
  >  (ref: [工業大学生ももやまのうさぎ塾](https://www.momoyama-usagi.com/entry/info-algo-tree-traverse))

- **後順走査 (postorder traversal)**

  > 最初に左の部分木を走査し, 次に右の部分木を, 最後に節を完走する方法.
  > ![postorder-traversal](https://www.momoyama-usagi.com/wp-content/uploads/2021/05/20200118192933.gif)  
  >  (ref: [工業大学生ももやまのうさぎ塾](https://www.momoyama-usagi.com/entry/info-algo-tree-traverse))

また, 走査したときに, 昇順または降順に整理にされている木を **順序木 (ordered tree)** という.

### ☆ 書き方

#### リスト

##### 連結リストの表示

手順:

1. 先頭データの位置が格納されている _HEAD_ の参照部を変数 `i` へ代入
2. 添字が `i` の配列のデータ部を取り出して, 表示する
3. 添字が `i` の参照部を取り出して, `i` へ代入
4. もし, `i` が終端を示す値 (_NULL_) でなければ, 2 へ戻って処理を繰り返し, _NULL_ なら終了

実装:

```c
void printList(int i)
{
    while (i != 0) // ここでは, 葉の終端参照を `0` としている.
    {
        printf("%c", Data[i].character);
        i = Data[i].nextIndex;
    }
    printf("\n");
}
```

([例題１](./p118_r1.c) から, 一部抜粋)

##### リスト最後尾へのデータの追加

手順:
現在使用している添字の最大値を `last` とする.

1. 先頭データの位置が格納されている _HEAD_ の参照部を変数 `i` へ代入
2. `i` を `j` に大入試, ここまでの最終添字を保存
3. 添字が `i` の配列の参照部を取り出し, `i` に代入
4. もし, `i` が終端を示す値 (_NULL_) でなければ, 2 に戻って処理を繰り返し, _NULL_ ならば, 5 へ進む
5. 変数 `last` の値を 1 増やす
6. 添字が `j` の配列の参照部に `last` を代入
7. 添字が `last` の配列のデータ部に追加するデータを代入
8. 添字が `last` の配列の参照部に, 終端を示す値 (_NULL_) を代入

実装:

```c
void addList(char c)
{
    int i, j;

    i = Data[0].nextIndex;
    while (i != 0) // ここでは, 葉の終端参照を `0` としている.
    {
        j = i;
        i = Data[i].nextIndex;
    }

    lastIndex++;
    Data[j].nextIndex = lastIndex;
    Data[lastIndex].character = c;
    Data[lastIndex].nextIndex = 0;
}
```

([例題１](./p118_r1.c) から, 一部抜粋)

#### 木構造

教科書では, 間順走査のみの紹介だったため, 間順走査のみの紹介である.

手順:

1.  左の部分木の葉であるところから開始する
2.  処理しようとする節が葉 (末端) ならば, 葉に書かれた値を返す
3.  葉でなければ, 左の部分木を処理したものと, 節に書かれた演算子と, 右の部分木を処理したものをつなぐ

実装:

```c
void printTree(int i)
{
    if (tree[i].leftPointer == -1) // ここでは, 葉の終端参照を `-1` としている.
    {
        printf("%c", tree[i].label);
    }
    else
    {
        printf("(");
        printTree(tree[i].leftPointer);
        printf("%c", tree[i].label);
        printTree(tree[i].rightPointer);
        printf(")");
    }
}
```

([例題２](./p120_r2.c) から, 一部抜粋)

`printTree`関数の中で, `printTree`関数を呼び出している部分が複数ある.  
このように, 自分自身を繰り返し参照する方法を **再帰呼び出し (recursive call)** という.

### ☆ 教科書問題

#### 構造体の配列を使ったリストのプログラム

- [例題１](./p118_r1.c)
  - [練習問題](./p109_ren_1.c)
  - [先生からの問題](./p109_ren_2.c)

#### ２分木に格納された文字の表示

- [例題２](./p120_r2.c)
  - [練習問題](./p121_ren.c)

## ref

[うさぎでもわかるスタックとキュー](https://www.momoyama-usagi.com/entry/info-algo-stack-queue)

おわり