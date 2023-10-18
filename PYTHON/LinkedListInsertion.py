#############################################################################################
#############################################################################################
#############################     Class Node    #############################################
################################      &       ###############################################
############################      functions      ############################################
#############################################################################################
#############################################################################################
class Node:
    def __init__(self, value, next):  # self is the instance of this class
        self.value = value
        self.next = next
# function that append a value at th eend of the head given
def append_at_end(head: Node, value) -> Node: # value = whatever u want to store
    new_node = Node(value, None)
    if head is None:
        head = new_node # link list is empty so now there is only our new node
        return head
    temp = head
    while temp.next != None: # we arrive at the last
        temp = temp.next
    temp.next = new_node     # append the new node at the end of the list
    return head
# function that append at the begining of the head given
def append_beginning(head: Node, value) -> Node:
    new_node = Node(value, head)
    return new_node
# print link list
def print_list(head):
    temp = head
    while temp is not None:
        print(temp.value)
        temp = temp.next






#############################################################################################
#############################################################################################
###############################     main    #################################################
############################      function      #############################################
#############################################################################################
#############################################################################################
def main(head):
    temp = head
    new_head = None
    value = None
    while temp:
        if temp.value != 0 and temp.value != 1:
            value = temp.value
        elif temp.value == 0:
            new_head = append_beginning(new_head, value)
        else:
            append_at_end(new_head, value)
        temp = temp.next
    return new_head



#############################################################################################
#############################################################################################
###############################     time    #################################################
###########################      complexity      ############################################
#############################################################################################
#############################################################################################
'''
Worst Case: O(N^2)
Best Case: O(N)
Average Case: O(N)
'''

#############################################################################################
#############################################################################################
##############################      test      ###############################################
#############################################################################################
#############################################################################################
# 9->0->5->1->6->1->2->0->5->0
head = Node(9, None)
head.next = Node(0, Node(5, Node(1, Node(6, Node(1, Node(2, Node(0, Node(5, Node(0, None)))))))))
new_head = main(head)
print_list(new_head)








# TRY THAT FUNCTIONS WORKS PROPERLY
# head = Node(1, None)
# head.next = Node(2, Node(3, None))
# print_list(head)
# print('\n')
#
# append_at_end(head, 7)
# print_list(head)
# print('\n')
#
# head = append_beginning(head, 8)
# print_list(head)
# print('\n')



