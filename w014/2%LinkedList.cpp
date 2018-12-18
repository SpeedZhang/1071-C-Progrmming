#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Date
{
    int year;
    int month;
    int day;
};
struct ListNode
{
    int id;
    Date date;
    int num[6];
    ListNode *nextPtr;
};
typedef ListNode *ListNodePtr;
void insert( ListNodePtr *sPtr, ListNode item );
int del( ListNodePtr *sPtr, ListNode item );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions( void );



int main( void )
{
    ListNodePtr startPtr = NULL;
    int choice;
    ListNode item;
    instructions();
    printf( "? " );
    scanf( "%d", &choice );
    while ( choice != 3 )
    {
        switch ( choice )
        {
        case 1:
            printf( "\nEnter ID: " );
            scanf( "%d", &item.id );
            printf("Enter the year:");
            scanf("%d",&item.date.year);
            printf("Enter the month:");
            scanf("%d",&item.date.month);
            printf("Enter the days:");
            scanf("%d",&item.date.day);
            printf("Random generating 6 lotto numbers ...\n");
            srand(time(NULL));
            for(int i=0; i<6; i++)
                item.num[i]=rand()%49+1;
            insert( &startPtr, item );
            printList( startPtr );
            break;
        case 2:
            if ( !isEmpty( startPtr ) )
            {
                printf( "Enter id to be deleted: " );
                scanf( "\n%d", &item.id );
                if ( del( &startPtr, item ) )
                {
                    printf( "%d deleted.\n", item.id );
                    printList( startPtr );
                }
                else
                {
                    printf( "%d not found.\n\n", item.id );
                }
            }
            else
            {
                printf( "List is empty.\n\n" );
            }
            break;
        default:
            printf( "Invalid choice.\n\n" );
            instructions();
            break;
        }
        printf( "? " );
        scanf( "%d", &choice );
    }
    printf( "End of run.\n" );
    return 0;
}



void instructions( void )
{
    printf( "Enter your choice:\n"
            "   1 to insert an element into the list.\n"
            "   2 to delete an element from the list.\n"
            "   3 to end.\n" );
}
void insert( ListNode **sPtr, ListNode item )
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    newPtr = (ListNode *) malloc( sizeof( ListNode ) );
    if ( newPtr != NULL )
    {
        newPtr->id = item.id;
        newPtr->date.year=item.date.year;
        newPtr->date.month=item.date.month;
        newPtr->date.day=item.date.day;
        for(int i=0; i<6; i++)
            newPtr->num[i]=item.num[i];
        newPtr->nextPtr = NULL;
        previousPtr = NULL;
        currentPtr = *sPtr;
        while ( currentPtr != NULL && item.id > currentPtr->id )
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if ( previousPtr == NULL )
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
    {
        printf( "%d not inserted. No memory available.\n", item.id );
    }
}



int del( ListNodePtr *sPtr, ListNode item )
{
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;
    if ( item.id == ( *sPtr )->id )
    {
        tempPtr = *sPtr;
        *sPtr = ( *sPtr )->nextPtr;
        free( tempPtr );
        return item.id;
    }
    else
    {
        previousPtr = *sPtr;
        currentPtr = ( *sPtr )->nextPtr;
        while ( currentPtr != NULL && currentPtr->id != item.id )
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if ( currentPtr != NULL )
        {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free( tempPtr );
            return item.id;
        }
    }
    return '\0';
}



int isEmpty( ListNodePtr sPtr )
{
    return sPtr == NULL;
}
void printList( ListNodePtr currentPtr )
{
    if ( currentPtr == NULL )
    {
        printf( "List is empty.\n\n" );
    }
    else
    {
        printf( "The list is:\n\n" );
        while ( currentPtr != NULL )
        {
            printf( "Lotto ID:%d\n", currentPtr->id );
            printf("    Date:%4d/%02d/%02d\n",currentPtr->date.year,currentPtr->date.month,currentPtr->date.day);
            printf("    Six winning numbers:");
            for(int i=0; i<6; i++)
                printf("%3d",currentPtr->num[i]);
            currentPtr = currentPtr->nextPtr;
            printf("\n");
        }
        printf( "NULL\n\n" );
    }
}
