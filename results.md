# gcc 6.3.0: 
### without standard specification:
- Compiled without problems

### with standard specification :
> std=c99 nothing 
>std=c90 error: ISO C90 forbids mixed declarations
>std=c89 error: ISO C90 forbids mixed declarations
>std=c11 nothing

# gcc 12.1.0:
### without standard specification:
- Compiled without problems
### with standard specification :
> std=c99 nothing 
>std=c90 error: ISO C90 forbids mixed declarations
>std=c89 error: ISO C90 forbids mixed declarations
>std=c18: nothing
>std=c11 nothing
>std=gnu11: nothing