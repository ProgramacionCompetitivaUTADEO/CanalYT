;; -*- lexical-binding: t; -*-

(TeX-add-style-hook
 "referencias"
 (lambda ()
   (LaTeX-add-bibitems
    "icpc2025"
    "weiss2020data"))
 '(or :bibtex :latex))

