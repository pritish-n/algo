t e m p l a t e   < t y p e n a m e   T >  
 c l a s s   d i g r a p h   :   p u b l i c   g r a p h < T >   {  
     p u b l i c :  
     u s i n g   g r a p h < T > : : e d g e s ;  
     u s i n g   g r a p h < T > : : g ;  
     u s i n g   g r a p h < T > : : n ;  
     u s i n g   g r a p h < T > : : i g n o r e ;  
  
     d i g r a p h ( i n t   n )   :   g r a p h < T > ( n )   {  
     }  
  
     i n t   a d d ( i n t   f r o m ,   i n t   t o ,   T   c o s t   =   1 )   {  
         a s s e r t ( 0   < =   f r o m   & &   f r o m   <   n   & &   0   < =   t o   & &   t o   <   n ) ;  
         i n t   i d   =   ( i n t )   e d g e s . s i z e ( ) ;  
         g [ f r o m ] . p u s h _ b a c k ( i d ) ;  
         e d g e s . p u s h _ b a c k ( { f r o m ,   t o ,   c o s t } ) ;  
         r e t u r n   i d ;  
     }  
  
     d i g r a p h < T >   r e v e r s e ( )   {  
         d i g r a p h < T >   r e v ( n ) ;  
         f o r   ( a u t o   & e   :   e d g e s )   {  
             r e v . a d d ( e . t o ,   e . f r o m ,   e . c o s t ) ;  
         }  
         i f   ( i g n o r e   ! =   n u l l p t r )   {  
             r e v . s e t _ i g n o r e _ e d g e _ r u l e ( [ & ] ( i n t   i d )   {  
                 r e t u r n   i g n o r e ( i d ) ;  
             } ) ;  
         }  
         r e t u r n   r e v ;  
     }  
 } ; 