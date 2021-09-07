void sweepingNTree(PONT nTreeRoot){
    if(!nTreeRoot) return;
    // PONT_BINARY newBinaryRoot = startBinaryNode(key);
    
    PONT newNTreeNode =  nTreeRoot->primFilho;
    
    while(newNTreeNode){
        newNTreeNode = nTreeRoot->proxIrmao;
        
        if(!newNTreeNode)
            newNTreeNode =  nTreeRoot->primFilho;
    }

}

void insertBinaryNode(KEY_TYPE key) {
    
}