# -*- mode: org; -*-

#+NAME: init
#+BEGIN_SRC shell :exports none
rm -rf ~/output/*.html
#+END_SRC

#+NAME: today
#+BEGIN_SRC shell :exports none :results output
echo `date`
#+END_SRC

#+NAME: increment
#+begin_src python :noweb yes :var num=0 :exports none
def incr(num):
   return num + 1
   
return incr(num)
#+end_src
