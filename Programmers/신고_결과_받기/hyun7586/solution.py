def solution(id_list, report, k):
    answer = []

    num_of_members=len(id_list)
    # the # of members

    for i in range(num_of_members):
        answer.append(0)
    # answer setting

    id_set=set(report)
    # except same report

    report_list=[]
    for _ in range(num_of_members):
        temp=[]
        report_list.append(temp)
    # report_list : restore reporters each member list in 2-dimension-list

    for content in id_set:
            reporter, reportee = content.split()

            num=id_list.index(reportee)
            report_list[num].append(reporter)
        # report_list setting is finished

        for i in range(num_of_members):
            if len(report_list[i])>=k:
                for j in report_list[i]:
                    answer[id_list.index(j)]+=1

        return answer