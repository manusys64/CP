:set nu
:set relativenumber
:set autoindent
:set tabstop=4
:set shiftwidth=4
:set smarttab
:set softtabstop=4
:set mouse=a
:set clipboard=unnamed
:set termguicolors
:set scrolloff=10
colorscheme tokyonight

filetype on
filetype indent on

inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}
map <C-a> <esc>ggVGy<CR>

autocmd BufNewFile *.cpp 0r /home/lavinraj/cp/template.cpp
autocmd filetype cpp nnoremap <F9> :w <bar> !clear && g++ % -o %:r<CR>
autocmd filetype cpp nnoremap <F10> :!./%:r<CR>

let &t_SI = "\e[6 q"
let &t_EI = "\e[2 q"

let s:clip = '/mnt/c/Windows/System32/clip.exe'  " change this path according to your mount point
if executable(s:clip)
        augroup WSLYank
                    autocmd!
                            autocmd TextYankPost * if v:event.operator ==# 'y' | call system(s:clip, @0) | endif
                                augroup END
                            endif
 
        au BufNewFile,BufRead *.tex
            \ set nocursorline |
            \ set nornu |
            \ set number |
