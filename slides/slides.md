---
theme: ./theme.json
---

# Code Execution

```bash
echo "this is my code" | boxes -d boy
```
---

# Preprocessing

~~~figlet "abc"
~~~

---
# Welcome to Slides
A terminal based presentation tool

```go
package main

import "fmt"

func main() {
  fmt.Println("Written in Go!")
}
```

---

## Everything is markdown
In fact this entire presentation is a markdown file

---

# h1
## h2
### h3
#### h4
##### h5
###### h6

---

# Markdown components
You can use everything in markdown!
* Like bulleted list
* You know the deal

1. Numbered lists too

---

# Tables

| Tables | Too    |
| ------ | ------ |
| Even   | Tables |

---

## Code execution
```go
package main

import "fmt"

func main() {
  fmt.Println("Execute code directly inside the slides")
}
```

You can execute code inside your slides by pressing `<C-e>`,
the output of your command will be displayed at the end of the current slide.
---

# Graphs

```
digraph {
    rankdir = LR;
    a -> b;
    b -> c;
}
```
```
┌───┐     ┌───┐     ┌───┐
│ a │ ──▶ │ b │ ──▶ │ c │
└───┘     └───┘     └───┘
```
---

All you need to do is separate slides with triple dashes
`---` on a separate line, like so:

```markdown
# Slide 1
Some stuff

--- 

# Slide 2
Some other stuff
```
